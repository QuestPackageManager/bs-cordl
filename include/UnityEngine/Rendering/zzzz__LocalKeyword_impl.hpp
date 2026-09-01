#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\LocalKeyword.hpp"
#include "UnityEngine/Rendering/zzzz__LocalKeywordSpace_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LocalKeyword_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::LocalKeyword.IsOverridable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::LocalKeyword)>(&::UnityEngine::Rendering::LocalKeyword::IsOverridable)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b2d1c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LocalKeyword>(), { "IsOverridable", {}, { ::i2c::type_of<::UnityEngine::Rendering::LocalKeyword>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LocalKeyword.GetShaderKeywordCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::UnityEngine::Shader*)>(&::UnityEngine::Rendering::LocalKeyword::GetShaderKeywordCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b2d238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LocalKeyword>(), { "GetShaderKeywordCount", {}, { ::i2c::type_of<::UnityEngine::Shader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LocalKeyword.GetShaderKeywordIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::UnityEngine::Shader*, ::StringW)>(&::UnityEngine::Rendering::LocalKeyword::GetShaderKeywordIndex)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x6b2d2f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LocalKeyword>(), { "GetShaderKeywordIndex", {}, { ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LocalKeyword.GetComputeShaderKeywordCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::UnityEngine::ComputeShader*)>(&::UnityEngine::Rendering::LocalKeyword::GetComputeShaderKeywordCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b2d4ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LocalKeyword>(), { "GetComputeShaderKeywordCount", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LocalKeyword.GetComputeShaderKeywordIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::UnityEngine::ComputeShader*, ::StringW)>(&::UnityEngine::Rendering::LocalKeyword::GetComputeShaderKeywordIndex)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x6b2d568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LocalKeyword>(),
                                                             { "GetComputeShaderKeywordIndex", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LocalKeyword.get_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::LocalKeyword::*)()>(&::UnityEngine::Rendering::LocalKeyword::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b2d720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LocalKeyword>(), { "get_name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LocalKeyword.get_isOverridable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::LocalKeyword::*)()>(&::UnityEngine::Rendering::LocalKeyword::get_isOverridable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6b2d728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LocalKeyword>(), { "get_isOverridable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LocalKeyword._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::LocalKeyword::*)(::UnityEngine::Shader*, ::StringW)>(&::UnityEngine::Rendering::LocalKeyword::_ctor)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x6b2d778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LocalKeyword>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LocalKeyword._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::LocalKeyword::*)(::UnityEngine::ComputeShader*, ::StringW)>(&::UnityEngine::Rendering::LocalKeyword::_ctor)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x6b2d920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LocalKeyword>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LocalKeyword.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::LocalKeyword::*)()>(&::UnityEngine::Rendering::LocalKeyword::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b2dac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LocalKeyword>(), { ::i2c::class_of<::UnityEngine::Rendering::LocalKeyword>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LocalKeyword.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::LocalKeyword::*)(::System::Object*)>(&::UnityEngine::Rendering::LocalKeyword::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6b2dad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LocalKeyword>(), { ::i2c::class_of<::UnityEngine::Rendering::LocalKeyword>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LocalKeyword.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::LocalKeyword::*)(::UnityEngine::Rendering::LocalKeyword)>(&::UnityEngine::Rendering::LocalKeyword::Equals)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6b2db5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LocalKeyword>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::LocalKeyword>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LocalKeyword.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::LocalKeyword::*)()>(&::UnityEngine::Rendering::LocalKeyword::GetHashCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6b2db94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LocalKeyword>(), { ::i2c::class_of<::UnityEngine::Rendering::LocalKeyword>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LocalKeyword.IsOverridable_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Rendering::LocalKeyword>)>(&::UnityEngine::Rendering::LocalKeyword::IsOverridable_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b2d1fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LocalKeyword>(),
                                                                                           { "IsOverridable_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::LocalKeyword>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LocalKeyword.GetShaderKeywordCount_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::IntPtr)>(&::UnityEngine::Rendering::LocalKeyword::GetShaderKeywordCount_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b2d2b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LocalKeyword>(), { "GetShaderKeywordCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LocalKeyword.GetShaderKeywordIndex_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::Rendering::LocalKeyword::GetShaderKeywordIndex_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b2d468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LocalKeyword>(),
                                         { "GetShaderKeywordIndex_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LocalKeyword.GetComputeShaderKeywordCount_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::IntPtr)>(&::UnityEngine::Rendering::LocalKeyword::GetComputeShaderKeywordCount_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b2d52c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LocalKeyword>(), { "GetComputeShaderKeywordCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LocalKeyword.GetComputeShaderKeywordIndex_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::Rendering::LocalKeyword::GetComputeShaderKeywordIndex_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b2d6dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LocalKeyword>(),
                            { "GetComputeShaderKeywordIndex_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::LocalKeyword::IsOverridable(::UnityEngine::Rendering::LocalKeyword kw) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LocalKeyword>(), { "IsOverridable", {}, { ::i2c::type_of<::UnityEngine::Rendering::LocalKeyword>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, kw);
}
inline uint32_t UnityEngine::Rendering::LocalKeyword::GetShaderKeywordCount(::UnityEngine::Shader* shader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LocalKeyword>(), { "GetShaderKeywordCount", {}, { ::i2c::type_of<::UnityEngine::Shader*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, shader);
}
inline uint32_t UnityEngine::Rendering::LocalKeyword::GetShaderKeywordIndex(::UnityEngine::Shader* shader, ::StringW keyword) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LocalKeyword>(),
                                                                                         { "GetShaderKeywordIndex", {}, { ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, shader, keyword);
}
inline uint32_t UnityEngine::Rendering::LocalKeyword::GetComputeShaderKeywordCount(::UnityEngine::ComputeShader* shader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LocalKeyword>(), { "GetComputeShaderKeywordCount", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, shader);
}
inline uint32_t UnityEngine::Rendering::LocalKeyword::GetComputeShaderKeywordIndex(::UnityEngine::ComputeShader* shader, ::StringW keyword) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LocalKeyword>(),
                                                           { "GetComputeShaderKeywordIndex", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, shader, keyword);
}
inline ::StringW UnityEngine::Rendering::LocalKeyword::get_name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LocalKeyword>(), { "get_name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::LocalKeyword::get_isOverridable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LocalKeyword>(), { "get_isOverridable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::LocalKeyword::_ctor(::UnityEngine::Shader* shader, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LocalKeyword>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, shader, name);
}
inline void UnityEngine::Rendering::LocalKeyword::_ctor(::UnityEngine::ComputeShader* shader, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LocalKeyword>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, shader, name);
}
inline ::StringW UnityEngine::Rendering::LocalKeyword::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::LocalKeyword>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::LocalKeyword::Equals(::System::Object* o) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::LocalKeyword>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, o);
}
inline bool UnityEngine::Rendering::LocalKeyword::Equals(::UnityEngine::Rendering::LocalKeyword rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LocalKeyword>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::LocalKeyword>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, rhs);
}
inline int32_t UnityEngine::Rendering::LocalKeyword::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::LocalKeyword>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::LocalKeyword::IsOverridable_Injected(::by_ref<::UnityEngine::Rendering::LocalKeyword> kw) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LocalKeyword>(),
                                                                                         { "IsOverridable_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::LocalKeyword>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, kw);
}
inline uint32_t UnityEngine::Rendering::LocalKeyword::GetShaderKeywordCount_Injected(::System::IntPtr shader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LocalKeyword>(), { "GetShaderKeywordCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, shader);
}
inline uint32_t UnityEngine::Rendering::LocalKeyword::GetShaderKeywordIndex_Injected(::System::IntPtr shader, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> keyword) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LocalKeyword>(),
                                       { "GetShaderKeywordIndex_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, shader, keyword);
}
inline uint32_t UnityEngine::Rendering::LocalKeyword::GetComputeShaderKeywordCount_Injected(::System::IntPtr shader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LocalKeyword>(), { "GetComputeShaderKeywordCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, shader);
}
inline uint32_t UnityEngine::Rendering::LocalKeyword::GetComputeShaderKeywordIndex_Injected(::System::IntPtr shader, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> keyword) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LocalKeyword>(),
                          { "GetComputeShaderKeywordIndex_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, shader, keyword);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::LocalKeyword>"
constexpr UnityEngine::Rendering::LocalKeyword::operator ::System::IEquatable_1<::UnityEngine::Rendering::LocalKeyword>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::LocalKeyword>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::LocalKeyword>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::LocalKeyword>* UnityEngine::Rendering::LocalKeyword::i___System__IEquatable_1___UnityEngine__Rendering__LocalKeyword_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::LocalKeyword>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_SpaceInfo", ty: "::UnityEngine::Rendering::LocalKeywordSpace", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Name", ty: "::StringW", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "m_Index", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::LocalKeyword::LocalKeyword(::UnityEngine::Rendering::LocalKeywordSpace m_SpaceInfo, ::StringW m_Name, uint32_t m_Index) noexcept {
  this->m_SpaceInfo = m_SpaceInfo;
  this->m_Name = m_Name;
  this->m_Index = m_Index;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::LocalKeyword::LocalKeyword() {}
